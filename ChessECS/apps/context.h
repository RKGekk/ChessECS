#pragma once 

typedef void * SDL_GLContext;
struct SDL_Window;

struct Resolution {
	int x;
	int y;
};

class Context {
private:
	SDL_Window * window;
	SDL_GLContext gl_context;

public:
	Context(const string &window_name);
	void start_imgui();
	void swap_buffer();
	Resolution get_screen_resolution() const;
};