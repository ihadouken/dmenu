char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cccccc", "#282c34" },
	[SchemeSel] = { "#1c1f24", "#c678dd" },
	[SchemeOut] = { "#000000", "#51afef" },
    #if BORDER_PATCH
    [SchemeBorder] = { "#000000", "#1f9ab9" },
    #endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid] = { "#d7d7d7", "#1c1f24" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight] = { "#98be65", "#000000" },
	[SchemeNormHighlight] = { "#98be65", "#000000" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
};
