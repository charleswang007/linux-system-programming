EX:=ex3

CFLAGS := "-lpthread"

all: run clean

run: $(EX)
	-(sleep 15; pkill -SIGKILL $(EX); ) &
	-./$(EX) 

$(EX): $(EX).c

clean:
	rm -f ex?  strace*
