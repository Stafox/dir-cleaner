#!python
for i in xrange(0, 100000):
    f = open("./test/{0}_{0}_{0}_{0}".format(i), "w")
    f.close()
    if i % 10000 == 0:
        print i
