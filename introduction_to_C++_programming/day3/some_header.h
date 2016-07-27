// this trick using "ifndef" wrapping the entire content is a way to ensure the header is only called once
#ifndef SOME_HEADER_FILE_H
#define SOME_HEADER_FILE_H
struct Point{
    int x_coord;
    int y_coord;
};
#endif
