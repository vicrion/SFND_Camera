SHELL := /bin/bash
LINUX_RELEASE := $(shell lsb_release -c | cut -f2)

BASE.DIR=$(PWD)

# install dependecies:
# sudo apt install libopencv-dev

BUILD.DIR=$(BASE.DIR)/build_cmd
build: .FORCE
	rm -rf $(BUILD.DIR) && mkdir -p $(BUILD.DIR)
	cmake $(BASE.DIR) -B$(BUILD.DIR) && cd $(BUILD.DIR) && make

.FORCE: