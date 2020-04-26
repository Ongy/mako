#ifndef MAKO_SURFACE_H
#define MAKO_SURFACE_H

#include "config.h"

struct mako_state;
struct mako_surface;
struct mako_surface_config;

void destroy_surface(struct mako_surface *surface);
struct mako_surface *create_surface(struct mako_state *state,
		struct mako_surface_config *config);
#endif
