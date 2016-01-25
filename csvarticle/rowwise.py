import csv

userList = []
benList = []

with open('user.csv', 'r') as userFile:
    userFileReader = csv.reader(userFile)
    for row in userFileReader:
        userList.append(row)

with open('beneficiary.csv', 'r') as benFile:
    benReader = csv.reader(benFile)
    for row2 in benReader:
        benList.append(row2)

for i in userList:
    print i

for i in benList:
    print i


with open('row_wise.csv', 'w') as rowFile:
    rowFileWriter = csv.writer(rowFile)
    for user_row in userList:
        combined_row = []
        combined_row.extend(user_row)
        for ben_row in benList:
            if user_row[0] == ben_row[0]:
                combined_row.append(ben_row[1])
        rowFileWriter.writerow(combined_row)