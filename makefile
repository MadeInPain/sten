sources = src/main.c
App-debug: $(sources)
	gcc -g $(sources) -o bin/debug/app
clear: 
	rm -f bin/debug/app bin/release/app