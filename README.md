# system-cockpit

## What is this project about?

System Cockpit is a graphical system monitoring dashboard written in C++.

It collects system information (such as CPU load, memory usage, and more) and displays this data in a modern Qt-based GUI.

One special aspect of this project is the use of D-Bus for inter-process communication:

System data can be exposed and accessed via D-Bus, making it possible for other applications or scripts to interact with the monitoring backend.

This project mainly serves as a learning playground for modern C++, inter-process communication, and Qt GUI development.

Main goals:

- Learn best practices in C++ and dev tools (e.g. 'clang-format' or pre-commit hooks)
- Understand and implement D-Bus integration
- Hands-on experience on Qt

## Architecture

<pre> Linux System Resources
        ↓
 C++ Data Collector
        ↓
     D-Bus IPC
        ↓
      Qt GUI </pre>