char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#FCFCFA", "#2D2A2E" },
	[SchemeSel] = { "#000000", "#AB9DF2" },
	[SchemeOut] = { "#2D2A2E", "#78DCE8" },
	#if !PLAIN_PROMPT_PATCH && PROMPT_COLOR_PATCH
	[SchemePrompt] = { "#000000", "#AB9DF2" },
	#endif // !PLAIN_PROMPT_PATCH && PROMPT_COLOR_PATCH
    #if BORDER_PATCH
    [SchemeBorder] = { "#000000", "#78DCE8" },
    #endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid] = { "#FCFCFA", "#000000" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight] = { "#A9DC76", "#000000" },
	[SchemeNormHighlight] = { "#A9Dc76", "#000000" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
};
