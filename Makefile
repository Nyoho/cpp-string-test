TARGETS=main
CPPFLAGS += -Wall -I/usr/include/c++/4.2.1
LDFLAGS += -std=c++11 -stdlib=libstdc++
all: $(TARGETS)

.PHONY: clean
clean:
	$(RM) *~ *.o $(TARGETS)
