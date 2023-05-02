char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#eee8d5", "#002b36" },
	[SchemeSel] = { "#ffffff", "#d33682" },
	[SchemeOut] = { "#ffffff", "#268bd2" },
	#if !PLAIN_PROMPT_PATCH && PROMPT_COLOR_PATCH
	[SchemePrompt] = { "#ffffff", "#d33682" },
	#endif // !PLAIN_PROMPT_PATCH && PROMPT_COLOR_PATCH
    #if BORDER_PATCH
    [SchemeBorder] = { "#000000", "#93a1a1" },
    #endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid] = { "#eee8d5", "#000000" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight] = { "#2aa198", "#000000" },
	[SchemeNormHighlight] = { "#2aa198", "#000000" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
};
