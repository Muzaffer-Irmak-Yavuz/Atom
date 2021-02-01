#if !defined COORDINATES_H_INCLUDED
#define COORDINATES_H_INCLUDED



enum Line       {LINE_A , LINE_B , LINE_C , LINE_D , LINE_E , LINE_F , LINE_G , LINE_H};
enum Horizontal {H1 ,H2 , H3 ,H4 ,H5 , H6, H7 ,H8};

typedef enum Line Line;
typedef enum Horizontal Horizontal;

struct Coordinate
{

  Line line;
  Horizontal horizontal;
};

typedef struct Coordinate Coordinate;




#endif
