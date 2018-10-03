NAME = foo

prefix := /usr
exec_prefix := $(prefix)
bindir := $(exec_prefix)/bin

LDLIBS := -lbar

$(NAME): $(NAME).o

.PHONY: install clean

install:
	install -d $(DESTDIR)/$(bindir)
	install -m 0755 $(NAME) $(DESTDIR)/$(bindir)

clean:
	rm -f $(NAME) *.o
