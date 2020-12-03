all:list2 test1 teststack
list2: list1.c list2.c
	gcc list1.c list2.c -o list2
test1: sort.c test1.c
	gcc sort.c test.c -o test
teststack: stack.c teststack.c
	gcc stack.c teststack.c -o teststack
clean:
	rm list2
	rm test1
	rm teststack
