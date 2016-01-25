import csv

with open('out.csv' ,'w') as outFile:
    fileWriter = csv.writer(outFile)
    with open('user.csv','r') as inFile:
        fileReader = csv.reader(inFile)
        for row in fileReader:
            fileWriter.writerow(row)

with open('out.csv','r') as outFile:
    fileReader = csv.reader(outFile)
    for row in fileReader:
        print row