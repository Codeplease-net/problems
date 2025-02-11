import os
dir = os.listdir()
for i in dir:
    if (os.path.isdir(i)):
        os.system("mv "+i+"/APB.OUT " + i + "/ASB.OUT")