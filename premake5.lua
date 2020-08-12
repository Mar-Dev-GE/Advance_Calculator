workspace "Advance_Calculator"
	architecture "x64"

configurations
{
	"Debug", "Release"
}

staticruntime "on"
systemversion "latest"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Advance_Calculator_prj"
	location "%{prj.name}"
	kind "ConsoleApp"
	language "C++"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	targetdir ("bin/" .. outputdir .."/%{prj.name}")
	objdir ("bin-obj/" .. outputdir .."/%{prj.name}")

filter "system:windows"

	defines
	{
		"CALCULATOR_PLATFORN_WINDOWS"
	}

filter "system:linux"
	pic "on"

	defines
	{
		"CALCULATOR_PLATFRON_LINUX"
	}

filter "system:macosx"
	pic "on"

	defines
	{
		"CALCULATOR_PLATFRON_MACOSX"
	}

filter "configurations:Debug"
	symbols "on"
	defines
	{
		"CALCULATOR_DEBUG"
	}

filter "configurations:Release"
	optimize "on"
	defines
	{
		"CALCULATOR_RELEASE"
	}