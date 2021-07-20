APPNAME=weather
SRCS=main.c weather.c
LIBS=libcurl
${APPNAME} : ${SRCS}
	gcc -o ${APPNAME} ${SRCS} `pkg-config --cflags --libs ${LIBS}`
clean:
	rm ${APPNAME}
