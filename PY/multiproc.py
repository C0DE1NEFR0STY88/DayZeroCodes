import multiprocessing
import time

def print_cube(num):
    print("Cube: {}".format(num * num * num))

def print_square(num):
    print("Square: {}".format(num * num))

if __name__ == "__main__":
    
    numpack = []
    
    for x in range(100000):
        numpack.append(x) #GENIUS™
    
    tstart = time.time()
    with multiprocessing.Pool(processes=8) as pool:
        pool.map(print_square, numpack)
        
        pool.map(print_cube, numpack) 
    tend = time.time()
    
    print("Done! in ", tend - tstart)



'''
import multiprocessing
import time

def print_cube(num):
    print("Cube: {}".format(num * num * num))

def print_square(num):
    print("Square: {}".format(num * num))

if __name__ == "__main__":
    
    numpack = []
    
    for x in range(100000):
        numpack.append(x) #GENIUS™ actually.
    
    tstart = time.time()
    for val in numpack:
        print_square(val)
        print_cube(val)
    tend = time.time()
    
    print("Done! in ", tend - tstart)
'''
#see local for in depth; wm.
#ctrl + / for comms toggle.
