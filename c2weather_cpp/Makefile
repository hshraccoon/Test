APPNAME=weather
SRCS=main.cpp weather.cpp
LIBS=libcurl
${APPNAME} : ${SRCS}
	g++ -o ${APPNAME} ${SRCS} `pkg-config --cflags --libs ${LIBS}`
clean:
	rm ${APPNAME}
