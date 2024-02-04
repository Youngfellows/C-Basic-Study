#在项目根目录中运行make（相当于运行make all）
#在项目根目录中运行make run,make clean
#运行./app运行该程序

#定义变量
app_name = app
clean_cmd = rm app *.o
COPTIONS = -c -o

#1.使用变量:$(variable name)
all:${app_name}
app:app.o
	gcc -o $@ $<
app.o:example58.c
	gcc $(COPTIONS) $@ $^
#2.使用变量:$(variable name)
clean:
	$(clean_cmd)
run:
	./app