import os, sys, filecmp, difflib
import difflib

path = './test_cases/'

# r=root, d=directories, f = files
def get_test_cases_number():
    files = []
    for r, d, f in os.walk(path):
        for file in f:
            if 'in' in file:
                files.append(os.path.join(r, file))
    return len(files)

def compile_file():
    filename = sys.argv[1]
    comand_to_compile = 'g++ -o prog -std=c++17 -O2 -Wall ' + filename
    os.system(comand_to_compile)

def execute_test_cases(number):
    for i in range(number):
        execute_test = ("./prog < %sin%s.txt > %sans%s.txt" % (path,i+1,path, i+1))
        os.system(execute_test)

def remove_ans_files():
    for r, d, f in os.walk(path):
        for file in f:
            if 'ans' in file:
                os.system("rm "+path+file)

def is_a_AC():
    remove_ans_files()
    compile_file()
    number = get_test_cases_number()
    execute_test_cases(number)

    fail_test = False

    for i in range(number):
        a = ("%sans%s.txt" % (path,i+1))
        b = ("%sout%s.txt" % (path,i+1))
        c = filecmp.cmp(a,b)
        if(c==False):
            fail_test = True
            print("Falhou nos casos de test: ", i+1)

            text1 = open(a).readlines()
            text2 = open(b).readlines()

            for line in difflib.unified_diff(text1, text2):
                print(line)

    if(fail_test==False):
        print("Passou em todos os casos de teste!!!")

        
is_a_AC() 

        
    
