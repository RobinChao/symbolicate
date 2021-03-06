About
=====

Crash log files generated by iOS's ReportCrash daemon do not contain symbol names, making them difficult to interpret.
Symbolication is the act of looking up symbol names and adding them to these files.

This project provides a tool for symbolicating crash logs on and off device.

Usage
=====

To symbolicate a file and have the result printed to stdout:

    /usr/bin/symbolicate input_file

To instead have the result written to a file:

    /usr/bin/symbolicate -o output_file input_file

Configuration
=============

Besides symbolication, this tool also attempts to determine and assign blame to the binary image most likey responsible for the crash.

Selected binary images can be filtered out so that they will not be blamed.
These filters are defined in:

    /etc/symbolicate/blame_filters.plist

Requirements
=====

This tool requires the libsymbolicate library:
* [libsymbolicate](http://github.com/ashikase/libsymbolicate)

Credit
=====

This project also makes use of the following:
* [RegexKitLite framework](http://regexkit.sourceforge.net)
