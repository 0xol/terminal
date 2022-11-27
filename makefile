all:
	python3 main.py

setup_debian:
	sudo apt install wget gcc python3

setup_arch:
	sudo pacman -S wget gcc python3

debug: all
	cd terminal && ./terminal