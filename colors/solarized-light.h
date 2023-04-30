char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#657b83", "#fdf6e3" },
	[SchemeSel] = { "#ffffff", "#d33682" },
	[SchemeOut] = { "#ffffff", "#268bd2" },
    #if BORDER_PATCH
    [SchemeBorder] = { "#000000", "#93a1a1" },
    #endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid] = { "#073642", "#eee8d5" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight] = { "#2aa198", "#000000" },
	[SchemeNormHighlight] = { "#2aa198", "#000000" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
};
