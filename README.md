# Hello 👋

this is a simple template for C projects using plain GNU make, mostly did this so that I can easily use this for my own projects since I've always been copying things over from various projects I've been involved with, so the Idea is to make one nice project template for any future projects.

This template also includes a simple GitHub Actions CI setup that builds and tests this project on a lot of platforms including Windows (even Windows on ARM!).

## Project Structure 📁

```
.
├── GNUmakefile       # GNU Make build configuration
├── src/              # Source code files
├── .github/          # CI setup files
├── test.sh           # Test script (you are writing tests, aren't you?)
└── README.md         # This file
```

## Features ✨

- Simple project structure
- GNU Make build system
- GitHub CI integration setup
- Public domain license (Unlicense)

## Getting Started 🌟

### Prerequisites

- C compiler
- GNU Make

### Using This Template

1. Clone the repository:
   ```bash
   git clone https://github.com/Melchizedek6809/make-c-template.git your-project-name
   cd your-project-name
   ```

2. Build your project:
   ```bash
   make
   ```

3. Run your program:
   ```bash
   make run
   ```

4. Run tests:
   ```bash
   make test
   ```

## Makefile Commands 🛠️

- `make` - Compiles the project
- `make clean` - Removes build artifacts
- `make test` - Runs test script
- `make run` - Builds and runs the program
- `make install` - Installs to system (default: /usr/local)
- `make uninstall` - Uninstalls from system

## License 📝

This template is released into the public domain using the Unlicense.
See the LICENSE file for details.
