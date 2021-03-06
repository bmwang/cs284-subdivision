#ifndef LOADIMAGE_H_
#define LOADIMAGE_H_

#include "FreeImage.h"
#include <GL/glu.h>
#include <string>

using namespace std;

// load a bitmap with freeimage
bool loadBitmap(string filename, FIBITMAP* &bitmap);

// load a cube texture into opengl with freeimage
bool loadCube(string * filenames, GLuint &texture);

// load a texture into opengl with freeimage
bool loadTexture(string filename, GLuint &texture);

// load a height map and normal map (computed from the height map) into opengl with freeimage
bool loadHeightAndNormalMaps(string filename, GLuint &heightmap, GLuint &normalmap, double zScale);

// called by the height & normal map loader, computes normals from height map
void computeNormalMapFromHeightMap(FIBITMAP *height, FIBITMAP *normal, double zScale);

#endif

