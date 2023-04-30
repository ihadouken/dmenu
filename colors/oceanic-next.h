char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d8dee9", "#1b2b34" },
	[SchemeSel] = { "#000000", "#c594c5" },
	[SchemeOut] = { "#ffffff", "#6699cc" },
    #if BORDER_PATCH
    [SchemeBorder] = { "#000000", "#5fb3b3" },
    #endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid] = { "#d8dee9", "#000000" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight] = { "#99C794", "#000000" },
	[SchemeNormHighlight] = { "#99C794", "#000000" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
};
