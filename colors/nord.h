char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#D8DEE9", "#2E3440" },
	[SchemeSel] = { "#000000", "#B48EAD" },
	[SchemeOut] = { "#2E3440", "#88C0D0" },
    #if BORDER_PATCH
    [SchemeBorder] = { "#000000", "#5fb3b3" },
    #endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid] = { "#D8DEE9", "#000000" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight] = { "#A3BE8C", "#000000" },
	[SchemeNormHighlight] = { "#A3BE8C", "#000000" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
};
