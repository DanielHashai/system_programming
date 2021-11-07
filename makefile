loops:
	gcc -c basicClassification.c -c advancedClassificationLoop.c ;
	ar rcs libclassloops.a advancedClassificationLoop.o basicClassification.o ;

recursives:
	gcc -c basicClassification.c -c advancedClassificationRecursion.c;
	ar rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o ;

recursived:
	gcc -c basicClassification.c -c advancedClassificationRecursion.c ;
	gcc basicClassification.o advancedClassificationRecursion.o -shared -o libclassrec.so

loopd:
	gcc -fPIC -c basicClassification.c -c advancedClassificationLoop.c ;
	gcc -shared basicClassification.o advancedClassificationLoop.o -o libclassloops.so -lm
	
mains: 
	gcc -c basicClassification.c -c advancedClassificationRecursion.c;
	ar rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o ;
	gcc -c main.c ; 
	gcc -o mains main.o -L. libclassrec.a -lm	
	
maindloop:
	gcc -c basicClassification.c -c advancedClassificationLoop.c ;
	gcc -shared basicClassification.o advancedClassificationLoop.o -o libclassloops.so -lm ;
	gcc -c main.c ; 
	gcc -o maindloop main.o -L. -lclassloops

maindrec:
	gcc -c basicClassification.c -c advancedClassificationRecursion.c ;
	gcc basicClassification.o advancedClassificationRecursion.o -shared -o libclassrec.so ;
	gcc -c main.c ; 
	gcc -o maindrec main.o -L. -lclassrec -lm
	
all: mains maindloop maindrec
	
	
clean:
	rm -rf *.o *.a *.so
