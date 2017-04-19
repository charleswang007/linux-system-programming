
all: mysh.1
	groff -man -Tascii mysh.1 | more

etc: 
	(cd /usr/share/man/man1; zcat more.1.gz | less)
