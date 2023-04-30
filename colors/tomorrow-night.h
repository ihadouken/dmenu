char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#c5c8c6", "#1d1f21" },
	[SchemeSel] = { "#000000", "#b77ee0" },
	[SchemeOut] = { "#000000", "#54ced6" },
    #if BORDER_PATCH
    [SchemeBorder] = { "#000000", "#54ced6" },
    #endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid] = { "#c5c8c6", "#000000" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight] = { "#9ec400", "#000000" },
	[SchemeNormHighlight] = { "#9ec400", "#000000" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
};
