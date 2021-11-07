all: mains maindloop maindrec

loops:
	gcc -fPIC -c NumClass.h -c basicClassification.c -c advancedClassificationLoop.c ;
	ar rcs libclassloops.a advancedClassificationLoop.o basicClassification.o ;

recursives:
	gcc -fPIC -c NumClass.h  -c basicClassification.c -c advancedClassificationRecursion.c;
	ar rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o ;

recursived:
	gcc -fPIC -c NumClass.h  -c basicClassification.c -c advancedClassificationRecursion.c ;
	gcc basicClassification.o advancedClassificationRecursion.o -shared -o libclassrec.so

loopd:
	gcc -fPIC -c NumClass.h  -c basicClassification.c -c advancedClassificationLoop.c ;
	gcc -shared basicClassification.o advancedClassificationLoop.o -o libclassloops.so -lm
	
mains:  recursives
	gcc -c main.c ; 
	gcc -o mains main.o -L. libclassrec.a -lm	
	
maindloop: loopd
	gcc -c main.c ; 
	gcc -o maindloop main.o -L. -lclassloops

maindrec: recursived
	gcc -c main.c ; 
	gcc -o maindrec main.o -L. -lclassrec -lm
	
clean:
	rm -rf *.o *.a *.so
