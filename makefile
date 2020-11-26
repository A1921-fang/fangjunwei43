all:list2 sort1
testlist: list1.c list2.c
	gcc list1.c list2.c -o list2
sort1: sort.c sort1.c sort.h
	gcc sort.c sort1.c -o sort1
clean:
	rm list2
	rm sort1
