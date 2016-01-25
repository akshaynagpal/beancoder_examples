import csv
with open('beneficiary.csv', 'a') as newFile:
    newFileWriter = csv.writer(newFile)
    newFileWriter.writerow([3, 'xxx'])
    newFileWriter.writerow([4, 'yyy'])
    newFileWriter.writerow([5, 'zzz'])

with open('beneficiary.csv','r') as newFile:
    newFileReader = csv.reader(newFile)
    for row in newFileReader:
        print row