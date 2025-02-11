import os 
for i in range(1, 11):
    try:
        os.mkdir("test" + str(i))
    except:
        pass
dir = os.listdir()
for i in dir:
    if (os.path.isfile(i)):
        if ('in' in i or 'out' in i):
            if ('in' in i):
                a = i.split('in')
                os.system("cp " + i + " test" + a[1] + "/" + "APB.IN")
            if ('out' in i):
                a = i.split('out')
                os.system("cp " + i + " test" + a[1] + "/" + "APB.OUT")
            os.remove(i)