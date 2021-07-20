PROGNAME=curl_test
SRCS=main.c
LIBS=libcurl

${PROGNAME} : ${SRCS}
	gcc -o ${PROGNAME} ${SRCS} `pkg-config --cflags --libs ${LIBS}`
