# Files
EXEC  := monte
SRC  := $(wildcard *.c)
OBJ  := $(patsubst %.c,%.o,$(SRC))
# Options
CC      := gcc
CFLAGS  := -O3
LDPATH := -L/$$HOME/local/gsl-2.5/lib
LDLIBS := -lgsl -lgslcblas
# Rules
$(EXEC):  $(OBJ)
		$(LINK.o) -I$$HOME/local/gsl-2.5/include $(LDLIBS) $(LDPATH) -o  $@  $^
%.o: %.c
		$(COMPILE.c) -I$$HOME/local/gsl-2.5/include $<
main.o mytools.o: mytools.h
# Useful phony targets
.PHONY: clobber clean neat echo
clobber: clean
		$(RM) $(EXEC)
clean: neat
		$(RM) $(OBJ)
neat:
		$(RM) *~ .*~
echo:
		@echo $(OBJ)
