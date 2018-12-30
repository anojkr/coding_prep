from sys import stdin, stdout

def math():
	a = [int(x) for x in stdin.readline().split()]
	sum = 0
	for x in a:
		sum = sum + x
	stdout.write("sum = " + str(sum));


if __name__ == "__main__": 
    math()     