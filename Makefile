EXITRC ?= $(HOME)/.exitrc
PREFIX ?= /usr/local
.PHONY: noop install install-exitrc

noop: 
	$(info Targets: install install-exitrc)
	$(info PREFIX = $(PREFIX))
	$(info EXITRC = $(EXITRC))

install-exitrc: exitrc
	$(info Installing new .exitrc to $(EXITRC), backing up the old one.)
	install -b -m 0600 $< $(EXITRC)

install: bunsen-exit-ng
	install -m 0755 -D $< $(PREFIX)/bin/bunsen-exit-ng
