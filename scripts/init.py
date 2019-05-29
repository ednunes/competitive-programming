import os, sys

command = ("cp /home/eduardonunes/workspace/competitive-programming/scripts/template.cpp ./%s.cpp" % (sys.argv[1]))
os.system(command)
os.system("vim %s.cpp" % sys.argv[1])
#os.system("mkdir test_cases && cd test_cases && touch in1.txt out1.txt")
