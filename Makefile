SHELL := /bin/bash
LINUX_RELEASE := $(shell lsb_release -c | cut -f2)

BASE.DIR=$(PWD)
VCPKG.ROOT=$(BASE.DIR)/vcpkg
VCPKG.BIN=$(VCPKG.ROOT)/vcpkg

vcpkg: .FORCE
	rm -rf $(VCPKG.ROOT) && git clone https://github.com/microsoft/vcpkg.git && cd $(BASE.DIR)/vcpkg && ./bootstrap-vcpkg.sh -disableMetrics

baseline: .FORCE
	$(VCPKG.BIN) x-update-baseline --add-initial-baseline

# dynamic build will allow for debugging capability
TRIPLET.NAME=x64-linux
libraries: .FORCE
	$(VCPKG.BIN) install --vcpkg-root=$(VCPKG.ROOT) --enforce-port-checks --host-triplet=$(TRIPLET.NAME) --triplet=$(TRIPLET.NAME)

.FORCE: