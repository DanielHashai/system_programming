all: mains maindloop maindrec

mains:  recursives
	gcc main.c -o mains -L. libclassrec.a -lm
	
maindloop: loopd
	gcc main.c -o maindloop -L. -lclassloops

maindrec: recursived
	gcc main.c -o maindrec -L. -lclassrec -lm

loops: libclassloops.a

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar rcs libclassloops.a advancedClassificationLoop.o basicClassification.o

recursives: libclassrec.a

libclassrec.a:  advancedClassificationRecursion.o basicClassification.o
	ar rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

recursived: libclassrec.so

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	gcc basicClassification.o advancedClassificationRecursion.o -shared -o libclassrec.so

loopd: libclassloops.so 

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	gcc -shared basicClassification.o advancedClassificationLoop.o -o libclassloops.so -lm

%.o: %.c NumClass.h
	gcc -c -fPIC $< -o $@
clean:
	rm -rf *.o *.a *.so
