# libnoxattr

An `LD_PRELOAD` library that disables all forms of
[extended file attributes](https://en.wikipedia.org/wiki/Extended_file_attributes).
This is useful to simulate a file system that does not support extended
attributes on a file system that supports them, e.g., ext4.

## Usage

Build via `make` then run via:

```sh
LD_PRELOAD="/full/path/to/libnoxattr.so" $YOUR_PROGRAM
```

## References

* [fuse_xattrs](https://github.com/fbarriga/fuse_xattrs) - support xattr on file systems which do not support them
* inspired by [libeatmydata](https://github.com/stewartsmith/libeatmydata)

## License

Copyright (C) 2019 Andrew Gaul

Licensed under the MIT License
