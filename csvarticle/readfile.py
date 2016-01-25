import csv

with open('user.csv','r') as userFile:
    userFileReader = csv.reader(userFile)
    for row in userFileReader:
        print row

with open('account_details.csv','r') as detailsFile:
    detailsFileReader = csv.reader(detailsFile)
    for row in detailsFileReader:
        print row

