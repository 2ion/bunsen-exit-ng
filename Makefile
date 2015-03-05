EXITRC = $(HOME)/.exitrc
PREFIX ?= /usr/local
.PHONY: install-exitrc install-dmenuv install-bunsen-exit-ng

all: 
	@echo "Nothing to do."

install: install-bunsen-exit-ng install-dmenuv

install-exitrc: exitrc
	$(info Installing new .exitrc to $(EXITRC), backing up the old one.)
	install -b -m 0600 $< $(EXITRC)

install-bunsen-exit-ng: bunsen-exit-ng
	install -m 0755 -D $< $(PREFIX)/bin/bunsen-exit-ng

install-dmenuv: dmenuv
	install -m 0755 -D dmenu-v/dmenu $(PREFIX)/bin/dmenuv

dmenuv:
	git submodule init
	git submodule update
	make -C dmenu-v
