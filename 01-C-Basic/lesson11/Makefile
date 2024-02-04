GCC = gcc
TARGET = demoshell
OBJS = demoshell.o
SOURS = exampe07.c
$(TARGET):$(OBJS)
	$(GCC) -o $@ $^
$(OBJS):$(SOURS)	
	$(GCC) -c -o $@ $^
clean:
	rm $(TARGET) *.o
