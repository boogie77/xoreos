/* eos - A reimplementation of BioWare's Aurora engine
 * Copyright (c) 2010 Sven Hesse (DrMcCoy), Matthew Hoops (clone2727)
 *
 * The Infinity, Aurora, Odyssey and Eclipse engines, Copyright (c) BioWare corp.
 * The Electron engine, Copyright (c) Obsidian Entertainment and BioWare corp.
 *
 * This file is part of eos and is distributed under the terms of
 * the GNU General Public Licence. See COPYING for more informations.
 */

/** @file graphics/video/bik.cpp
 *  Decoding RAD Game Tools' Bink videos.
 */

#include "common/util.h"
#include "common/stream.h"

#include "graphics/video/bik.h"

namespace Graphics {

BIK::BIK(Common::SeekableReadStream *bik) : _bik(bik) {
	warning("TODO: BIK");
}

BIK::~BIK() {
}

bool BIK::gotTime() const {
	return true;
}

void BIK::processData() {
	_finished = true;
}

} // End of namespace Graphics
