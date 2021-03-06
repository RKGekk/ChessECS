#pragma once
#include "../../../common.h"
#include <map>
#include <vector>
#include <filesystem>

namespace fs = std::filesystem;

enum class ShaderLexema {
	SHADER_NAME,
	VS_SHADER,
	PS_SHADER,
	INCLUDE
};

struct MatchRange {
	std::string::iterator begin;
	std::string::iterator end;
	int beginIndex;
	int endIndex;
	ShaderLexema type;
	string typeContent;

	bool empty() const {
		return begin == end;
	}

	std::string str() const {
		return std::string(begin, end);
	}
};

struct ShaderFileDependency {
	vector<string> dependencies;
	fs::path path;
	bool isShaderFile;
	bool valid = false;
	bool exists = false;
	bool  loaded = false;
	string content;
	vector<MatchRange> lexems;
};

bool compile_shader(const string& shaderName, const vector<pair<GLuint, const char*>>& shaders, GLuint& program);
bool compile_shader(const string& shaderName, const vector<pair<GLuint, string>>& shaders, GLuint& program);

void update_file(const fs::path& file_path);

map<string, ShaderFileDependency>& getShaderFiles();