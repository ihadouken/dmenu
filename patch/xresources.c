#include <X11/Xresource.h>

void
readxresources(void)
{
	XrmInitialize();

	char* xrm;
	if ((xrm = XResourceManagerString(drw->dpy))) {
		char *type;
		XrmDatabase xdb = XrmGetStringDatabase(xrm);
		XrmValue xval;

		if (XrmGetResource(xdb, "dmenu.font", "*", &type, &xval))
			#if PANGO_PATCH
			strcpy(font, xval.addr);
			#else
			fonts[0] = strdup(xval.addr);
			#endif // PANGO_PATCH
		#if !PANGO_PATCH
		else
			fonts[0] = strdup(fonts[0]);
		#endif // PANGO_PATCH
        /* Colors for non-selected options. */
		if (XrmGetResource(xdb, "background", "*", &type, &xval))
			colors[SchemeNorm][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "foreground", "*", &type, &xval))
			colors[SchemeNorm][ColFg] = strdup(xval.addr);
        /* Colors for selected option. */
		if (XrmGetResource(xdb, "color13", "*", &type, &xval))
			colors[SchemeSel][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "foreground", "*", &type, &xval))
			colors[SchemeSel][ColFg] = strdup(xval.addr);
        /* Colors for options already selected for output. (for multiple outputs) */
		if (XrmGetResource(xdb, "color3", "*", &type, &xval))
			colors[SchemeOut][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "foreground", "*", &type, &xval))
			colors[SchemeOut][ColFg] = strdup(xval.addr);
		#if !PLAIN_PROMPT_PATCH && PROMPT_COLOR_PATCH
        /* Colors for the menu prompt textarea. */
		if (XrmGetResource(xdb, "color5", "*", &type, &xval))
			colors[SchemePrompt][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "foreground", "*", &type, &xval))
			colors[SchemePrompt][ColFg] = strdup(xval.addr);
		#endif // !PLAIN_PROMPT_PATCH && PROMPT_COLOR_PATCH
		#if MORECOLOR_PATCH
        /* Colors for options adjacent to selected option. */
		if (XrmGetResource(xdb, "color5", "*", &type, &xval))
			colors[SchemeMid][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "foreground", "*", &type, &xval))
			colors[SchemeMid][ColFg] = strdup(xval.addr);
		#endif // MORECOLOR_PATCH
		#if BORDER_PATCH
        /* Color of the window's border. */
		if (XrmGetResource(xdb, "color1", "*", &type, &xval))
			colors[SchemeBorder][ColBg] = strdup(xval.addr);
		#endif // BORDER_PATCH
		#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
        /* Colors for highlighting of selected option. */
		if (XrmGetResource(xdb, "background", "*", &type, &xval))
			colors[SchemeSelHighlight][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "color2", "*", &type, &xval))
			colors[SchemeSelHighlight][ColFg] = strdup(xval.addr);
        /* Colors for highlighting of other (non-selected) options. */
		if (XrmGetResource(xdb, "background", "*", &type, &xval))
			colors[SchemeNormHighlight][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "color4", "*", &type, &xval))
			colors[SchemeNormHighlight][ColFg] = strdup(xval.addr);
		#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
		#if HIGHPRIORITY_PATCH
		if (XrmGetResource(xdb, "dmenu.hpbackground", "*", &type, &xval))
			colors[SchemeHp][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.hpforeground", "*", &type, &xval))
			colors[SchemeHp][ColFg] = strdup(xval.addr);
		#endif // HIGHPRIORITY_PATCH
		#if EMOJI_HIGHLIGHT_PATCH
		if (XrmGetResource(xdb, "dmenu.hoverbackground", "*", &type, &xval))
			colors[SchemeHover][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.hoverforeground", "*", &type, &xval))
			colors[SchemeHover][ColFg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.greenbackground", "*", &type, &xval))
			colors[SchemeGreen][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.greenforeground", "*", &type, &xval))
			colors[SchemeGreen][ColFg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.yellowbackground", "*", &type, &xval))
			colors[SchemeYellow][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.yellowforeground", "*", &type, &xval))
			colors[SchemeYellow][ColFg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.bluebackground", "*", &type, &xval))
			colors[SchemeBlue][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.blueforeground", "*", &type, &xval))
			colors[SchemeBlue][ColFg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.purplebackground", "*", &type, &xval))
			colors[SchemePurple][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.purpleforeground", "*", &type, &xval))
			colors[SchemePurple][ColFg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.redbackground", "*", &type, &xval))
			colors[SchemeRed][ColBg] = strdup(xval.addr);
		if (XrmGetResource(xdb, "dmenu.redforeground", "*", &type, &xval))
			colors[SchemeRed][ColFg] = strdup(xval.addr);
		#endif // EMOJI_HIGHLIGHT_PATCH
		XrmDestroyDatabase(xdb);
	}
}
