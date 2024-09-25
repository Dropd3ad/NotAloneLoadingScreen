// Constants.c v2.5.0

// RANDO IMAGES ----------------------------------------------------------------
// If you dont want to use the UiHintPanel you can use these instead.
string GetRandomBackground()
{
	const string images[] = {
		"NotAloneLoadingScreen\GUI\textures\loading_screens\Loadingscreen.edds"
	};
	// If you add more images be sure to change the image count. 
	const int IMAGES_COUNT = 1;
	int bgIndex = Math.RandomInt(0, IMAGES_COUNT - 1);
	return images[bgIndex];
}

static bool ShowDeadScreen = false;

// SOCIALS & LINKS ---------------------------------------------------------------
// Set your links Here
class MenuURLS {
	static string urlDiscord   = "https://discord.gg/krd66vFGsa";
	static string urlFacebook  = "#";
	static string urlTwitter   = "#";
	static string urlReddit    = "#";
	static string urlYoutube   = "#";
	static string urlWebsite   = "#"; 
	static string urlPriorityQ = "#";
	static string urlCustom    = "#";
}

// DIALOGS ------------------------------------------------------------------------
// There is No Need to mess with anything below this line. 
const int COLORFUL_EXIT				= 666;
const int COLORFUL_CONFIGURE 		= 667;
const int COLORFUL_DEFAULTS 		= 668;
