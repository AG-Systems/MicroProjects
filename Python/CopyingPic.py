import shutil
src = ('main.jpg')
dst = 'C:\\Users\\BHS\\Desktop\\main.jpg'
count = 1
while count < 10000000000:
    shutil.copyfile(src, dst + str(count) + ".jpg")
    count += 1
