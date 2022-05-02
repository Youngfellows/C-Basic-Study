#在项目根目录中运行make（相当于运行make all）
#在项目根目录中运行make run,make clean
#运行./app运行该程序
all:app
app:app.o
	gcc -o app app.o
app.o:example01.c
	gcc -c -o app.o example01.c
clean:
	rm app *.o
run:
	./app
